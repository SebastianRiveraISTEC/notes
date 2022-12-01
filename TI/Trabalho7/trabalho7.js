const prompt = require("prompt-sync")();


let x = prompt("String: ");

let a1 = false;
let primeiraA ;

console.log("1) a.\n");
for (var i = 0; i < x.length; i++) {
	if(x[i] == 'a' && !a1){
		primeiraA = i;
		a1 = true;
	}
	if(a1){
		console.log(x[i]);
	}
}
console.log("\n\n1) b.\n");

let a2 = true;
for (var i = 0; i < x.length; i++) {
	if(x[i] == 'a'){
		a2 = false;
	}
	if(a2){
		console.log(x[i]);
	}
}

console.log("\n\n1) c.\n");
let a3 = false;
let segundaA;
for (var i = 0; i<x.length;i++){
		if(x[i] == 'a'){
			if(a3){
			segundaA = i;
			console.log(segundaA);
			break;
			}else{
				a3 = true;
			}
	}
}

console.log("\n\n1) d.\n");
console.log("Indice primeira a: " + primeiraA + "\n");
console.log("Indice segunda a: " + segundaA + "\n");
console.log(segundaA-primeiraA);
