// 1) 평균 구하기

function solution(arr){
    let len = arr.length;
    let sum = 0;
    let avg = 0;
    // for(let i=0;i<len;i++){
    //     sum += arr[i];
    // }
    arr.forEach(v => {
        sum+=v;
    })


    avg = sum / len;
    return avg
}
const result = solution([5,5]);
console.log("avg",result);