
```javascript
console.log(eval('2 + 2'));
// Expected output: 4

console.log(eval(new String('2 + 2')));
// Expected output: 2 + 2

console.log(eval('2 + 2') === eval('4'));
// Expected output: true

console.log(eval('2 + 2') === eval(new String('2 + 2')));
// Expected output: false
```

```javascript
typeof "John"                 // Returns "string"  
typeof 3.14                   // Returns "number"  
typeof NaN                    // Returns "number"  
typeof false                  // Returns "boolean"  
typeof [1,2,3,4]              // Returns "object"  
typeof {name:'John', age:34}  // Returns "object"  
typeof new Date()             // Returns "object"  
typeof function () {}         // Returns "function"  
typeof myCar                  // Returns "undefined" *  
typeof null                   // Returns "object"
```

```javascript
const beasts = ['ant', 'bison', 'camel', 'duck', 'bison'];
console.log(beasts.indexOf('bison'));
// Expected output: 1
// Start from index 2
console.log(beasts.indexOf('bison', 2));
// Expected output: 4
console.log(beasts.indexOf('giraffe'));
// Expected output: -1
```

```javascript
let text = "HELLO WORLD";  
let char = text.charAt(0);
// Expected output: 'H'
```

```javascript
const paragraph = 'The quick brown fox jumps over the lazy dog. If the dog barked, was it really lazy?';
const searchTerm = 'dog';

console.log(`The index of the first "${searchTerm}" from the end is ${paragraph.lastIndexOf(searchTerm)}`);
// Expected output: "The index of the first "dog" from the end is 52"
```

```javascript
function square(coord_x, coord_y, side){
	this.x = coord_x;
	this.y = coord_y;
	this.l = side;
}

quadrado.prototype.area = function(){
	var a = this.l*this.l;
	return a;
}

var sqr1 = new square(100,200,10);
alert(sqr1.area());
```

```javascript
//    T
window.onload = function(){
var canvas = document.getElementById("myCanvas");
var ctx = canvas.getContext("2d");
ctx.beginPath();
ctx.moveTo(50, 20);
ctx.lineTo(150, 20);
ctx.moveTo(100, 20);
ctx.lineTo(100, 80);
ctx.lineWidth = 2;
ctx.stroke();
};
```

```html
<!DOCTYPE html>
<html>

<head>
<title>Canvas </title>
<style>
body {
background: #dddddd;
}
#myCanvas {
margin: 10px;
background: #ffffff;
border: 1px solid #aaaaaa;
}
</style>
<script>
window.onload = function(){
var canvas = document.getElementById("myCanvas");
var context = canvas.getContext("2d");
Resposta:
context.beginPath();
context.moveTo(0, 200);
context.lineTo(200, 0);
context.strokeStyle = "#FF0000";
context.stroke();
};
</script>
</head>
<body>
<canvas id="myCanvas" width="200" height="200">

<p>This browser does not support the <code>canvas</code> element.</p>

</canvas>
</body>
</html>
```
