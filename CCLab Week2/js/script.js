// var myArray = [photo, film, paint, design, sculpture]

var photo = document.getElementById('photo');
var film = document.getElementById('film');
var paint = document.getElementById('paint');
var design = document.getElementById('design');
var sculpture = document.getElementById('sculpture');
var background = document.body;



photo.onmouseover = function (){
	document.getElementById("title").style.color = "purple";
	photo.style.textTransform = "uppercase";
	photo.style.backgroundColor = "purple";
	photo.style.width = "120%";

}
photo.onmouseout = function (){
	photo.style.textTransform = "lowercase";
	document.getElementById("title").style.color = "black";
	photo.style.backgroundColor = "red";
	photo.style.width = "100%";
}

photo.addEventListener("click", background1);
function background1(){
	background.classList.toggle("thephoto");
}


film.onmouseover = function (){
	document.getElementById("title").style.color = "gold";
	film.style.textTransform = "uppercase";
	film.style.backgroundColor = "gold";
	film.style.width = "130%";


}
film.onmouseout = function (){
	film.style.textTransform = "lowercase";
	document.getElementById("title").style.color = "black";
	film.style.backgroundColor = "red";
	film.style.width = "100%";
}

film.addEventListener("click", background2);
function background2(){
	background.classList.toggle("thefilm");
}

paint.onmouseover = function (){
	document.getElementById("title").style.color = "teal";
	paint.style.textTransform = "uppercase";
	paint.style.backgroundColor = "teal";
	paint.style.width = "140%";

}
paint.onmouseout = function (){
	paint.style.textTransform = "lowercase";
	document.getElementById("title").style.color = "black";
	paint.style.backgroundColor = "red";
	paint.style.width = "100%";
}

paint.addEventListener("click", background3);
function background3(){
	background.classList.toggle("thepaint");
}

design.onmouseover = function (){
	document.getElementById("title").style.color = "limegreen";
	design.style.textTransform = "uppercase";
	design.style.backgroundColor = "limegreen";
	design.style.width = "130%";

}
design.onmouseout = function (){
	design.style.textTransform = "lowercase";
	document.getElementById("title").style.color = "black";
	design.style.backgroundColor = "red";
	design.style.width = "100%";
}

design.addEventListener("click", background4);
function background4(){
	background.classList.toggle("thedesign");
}


sculpture.onmouseover = function (){
	document.getElementById("title").style.color = "tomato";
	sculpture.style.textTransform = "uppercase";
	sculpture.style.backgroundColor = "tomato";
	sculpture.style.width = "120%";

}
sculpture.onmouseout = function (){
	sculpture.style.textTransform = "lowercase";
	document.getElementById("title").style.color = "black";
	sculpture.style.backgroundColor = "red";
	sculpture.style.width = "100%";
}

sculpture.addEventListener("click", background5);
function background5(){
	background.classList.toggle("thesculpture");
}