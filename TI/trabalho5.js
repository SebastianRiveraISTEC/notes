const prompt = require("prompt-sync")();

let num = prompt("Numero do empregado: ");
let nome = prompt("Nome do empregado: ");
let horas = parseInt(prompt("Horas trabalhadas: "));
let valor = parseFloat(prompt("Valor por hora: "));
let salarioBruto = 0;

if(horas > 35){
    salarioBruto = 35*valor;
    salarioBruto+= (horas-35)*(valor*1.5);
}else{
    salarioBruto = horas*valor;
}


let social = 0.11*salarioBruto;
let IRS;

if(salarioBruto < 700){
IRS = 0.08;
}else if(salarioBruto < 1000){
IRS = 0.15;
}else if(salarioBruto < 2000){
IRS = 0.2;
}else{
IRS = 0.25;
}

let salarioLiquido = salarioBruto * (1-IRS) - social;

console.log(salarioLiquido);