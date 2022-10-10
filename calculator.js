const a = 100
const b = 3
const c = 'ㅋㅋㅋ' //plus1 minus1 multi1 div1 square1

function calculator(calc,input1,input2){
    let result;
    switch(calc){
        case 'plus' : 
            result = input1+input2;
            break;
        case 'minus' : 
            result = input1-input2;
            break;
        case 'multi' : 
            result = input1*input2;
            break;
        case 'div' : 
            result = input1/input2;
            break;
        case 'square' : 
            result = input1+input2;
            break;
        default : 
            result = "잘못 입력하셨습니다."
    }
    return result;
}
console.log(calculator(c,a,b))