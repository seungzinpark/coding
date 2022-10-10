let sum = 0;
let avg = 1;

const arr = [57, 69, 12, 30, 94];
for(let i=0; i<arr.length; i++){
    // console.log(arr[i]);
    sum=sum+arr[i];
}
console.log("총합 : ", sum);
avg = sum/arr.length;
console.log("평균 : ", avg);
