function solution(N){
    let sum = 0;
    const str = N + "";
    const arr = str.split('');

    for(let i=0; i<arr.length; i++){
        sum+=+arr[i];
    }
    return sum;
}

console.log(solution(123)); 