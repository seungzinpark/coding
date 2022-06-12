const arr = [0,1,2,3,4,5,6,7,8,9]
function solution(numbers){
    let sum = 0;
    for(let i=0;i<numbers.length;i++){
        if(arr.include(numbers[i])){
            arr.splice(numbers[i],1)
        }
    }
    return sum;
}

console.log("a", solution([1,2,3,4,6,7,8,0]))
console.log("b", solution([5,8,4,0,6,7,9]))
