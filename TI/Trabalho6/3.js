const prompt = require("prompt-sync")();

let n1 = parseInt(prompt("Numero n1: "));
let n2 = parseInt(prompt("Numero n2: "));
let n3 = parseInt(prompt("Numero n3: "));

if(n1>n2){//n1>n2
	if(n3<n2){//n2
		console.log("O numero intermedio e n2: " + n2);
	}else if(n3>n1){//n1
		console.log("O numero intermedio e n1: " + n1);
	}else{//n3
		console.log("O numero intermedio e n3: " + n3);	
	}
}else{// n2 > n1
	if(n3>n2){//n2
		console.log("O numero intermedio e n2: " + n2);
	}else if(n3 > n1){//n3
		console.log("O numero intermedio e n3: " + n3);
	}else{//n1
		console.log("O numero intermedio e n1: " + n1);
	}
}