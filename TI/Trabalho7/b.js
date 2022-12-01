const prompt = require("prompt-sync")();


let x = prompt("String: ");

let a = 0;
let e = 0;
let i = 0;
let o = 0;
let u = 0;

for (var j = 0; j<x.length; j++){
	if(x[j] == 'a'){
		a++;
	}else if(x[j] == 'e'){
		e++;
	}else if(x[j] == 'i'){
		i++;
	}else if(x[j] == 'o'){
		o++;
	}else if(x[j] == 'u'){
		u++;
	}
}

console.log("Vogal a: "+  a);
console.log("Vogal e: "+  e);
console.log("Vogal i: "+  i);
console.log("Vogal o: "+  o);
console.log("Vogal u: "+  u);