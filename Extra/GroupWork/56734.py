# Group: <56734, 56863, 56699, 56983>

import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import random

def getio (year):
    path = './bb22a10summarytables.xlsx'
    # Input output table
    df = pd.read_excel(path,
                       sheet_name = str(year),
                       usecols = "C:L",
                       header = None,
                       skiprows = 52,
                       nrows = 10)
    z = np.array(df,dtype = float) # £ million
    # Output per sector 
    dfx = pd.read_excel(path,
                        sheet_name = str(year),
                        usecols = "C:L",
                        header = None,
                        skiprows = 75,
                        nrows = 1)
    x = np.array(dfx, dtype = float)[0] # £ million
    return [z, x]


# a)
def coef(year):
    IOmatrix, output = getio(year)
    n = len(IOmatrix)
    result = np.empty([n,n])
    for i in range(n):
        for j in range(n):
            result[i][j] = (IOmatrix[i][j]) / output[j]
    return result

coefs = [coef(year) for year in range(1997,2021)]

# b)
def leon(a):
    n = len(a)
    result = np.linalg.inv(np.identity(n) - a)
    return result


def highest_impact(mat):
    n = len(mat)
    indexHighest = 0
    highestColSum = 0
    
    for column in range(n):
        accum = 0
        for row in range(n):
            accum += mat[row,column]
        if accum>highestColSum:
            indexHighest = column
            highestColSum = accum
    return indexHighest

# c)
def minaij(mats,i,j):
    Min = mats[0][i,j]
    for year in mats:
        if year[i,j] < Min:
            Min = year[i,j]
    return Min

def maxaij(mats,i,j):
    Max = mats[0][i,j]
    for year in mats:
        if year[i,j] > Max:
            Max = year[i,j]
    return Max

def simA(mats):
    n = len(mats[0])
    result = np.empty([n,n])
    for i in range(n):
        for j in range(n):
            amax = maxaij(mats,i,j)
            amin = minaij(mats,i,j)
            result[i,j] = random.uniform(amin, amax)
    return result

# d)
def createSimulations(times, mats):
    n = len(mats[0])
    
    simulations = [highest_impact(simA(coefs)) for i in range(times)]
    
    results = [0 for i in range(n)]
    
    for elem in simulations:
        results[elem]+=1
    
    for i in range(n):
        results[i] /= times
    
    return simulations,results

simulations,results = createSimulations(10000,coefs)