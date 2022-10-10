let a = 3;
let difference = 4;
let target = 5;
function sequence(a,difference,target){
    return result = a+(difference * (target-1));
}
console.log(sequence(3,4,5));

const recursive = (n) => {
    if(n-1 === 0 || n === 0) {
        return n
    }
    return recursive(n-1) + recursive(n-2)
}
console.log(recursive(5))

let a = 5;
let r = 3;
let target = 5;
function sequence(a,r,target){
    return result = a*(r**(target-1))
}
console.log(sequence(5,3,5));

let a = 5;
let r = 3;
let target = 5;
function sequence(a,r,target){
    return result = a*(r**(target-1))
}
console.log(sequence(5,3,5));

let a = 5;
let r = 3;
let t = 5;
function sequence(a,r,t){
    let acc;
    for(let n=1; n<t+1; n++){
        if(n===1){
            acc = a;
        }else{
            acc *= r;
        }
    }
    return acc;
}
console.log (sequence(5,3,5));

function recursive(a, r, t){
    // 종료조건
    if(t === 1) return a
    return recursive(a,r,t-1)*r
}
console.log(recursive(5,3,5));