// function solution(numbers){
//     let sum = 0;
//     // let answer = 0
//     const arr = [0,1,2,3,4,5,6,7,8,9]
//     for(let i=0;i<numbers.length;i++){
//         if(arr.includes(numbers[i])){
//             // console.log(arr[i])
//             arr.splice(arr.indexOf(numbers[i]),1)
//         }
//     }
//     for(let j=0;j<arr.length;j++){
//         sum += arr[j];
//     }
//     // console.log("sum", sum)
//     return sum
// }

function solution(numbers){
    let sum = 0
    for(let i = 0; i<numbers.length; i++){
        sum += numbers[i]
    }
    return 45-sum
}

function solution(numbers){
    // let sum = 0
    return 45 - numbers.reduce((acc, cur) => acc+cur, 0)
    // return 45-sum
}

console.log(solution([1,2,3,4,6,7,8,0]))
console.log(solution([5,8,4,0,6,7,9]))