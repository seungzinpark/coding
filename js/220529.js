함수선언문
function addbot(num1,num2){
    return num1 + num2;
}

함수표현식
let addbot = function (num1,num2){
    return num1+num2;
}

화살표함수
let addbot = (num1,num2) => {
    return num1+num2;
}

let addbot = (num1,num2) => num1+num2;


let num1 = 5
let num2 = 10
console.log(addbot(num1, num2));