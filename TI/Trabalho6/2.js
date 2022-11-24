const prompt = require("prompt-sync")();

let num = prompt("Digite um numero maior que 0: ");

if(num <=0){
	console.log("Valor introduzido errado, Termina o programa.")
}else{
	for(var i = num;i>=0;i--){
		console.log(i);
	}
}