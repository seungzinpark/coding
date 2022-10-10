const input1 = 100
const input2 = 3

const calc = 'multi' //plus1 minus1 multi1 div1 square1

function plus(num1,num2){
    return num1+num2
}

function minus(num1,num2){
    return num1-num2
}

function multi(num1,num2){
    return num1*num2
}

function div(num1,num2){
    return num1/num2
}

function square(num1,num2){
    return num1**num2
}

let result
switch(calc){
    case 'plus' : 
        result = plus(input1,input2);
        break;
    case 'minus' : 
        result = minus(input1,input2);
        break;
    case 'multi' : 
        result = multi(input1,input2);
        break;
    case 'div' : 
        result = div(input1,input2);
        break;
    case 'square' : 
        result = square(input1,input2);
        break;
    default : 
        console.log('다시 입력하세요.');   

    }
    
    
    // if(calc === 'plus' || calc === 'minus' || calc === 'multi' || calc === 'div' || calc === 'square'){
    //     console.log(result);
    // }

    if(typeof(result) === 'number'){
        console.log(result);
    }
