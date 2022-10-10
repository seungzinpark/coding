function plusBot(newArr){
    let sum = 0;
    const arr = [0,1,2,3,4,5,6,7,8,9];

//     for(let i=0; i<newArr.length; i++){
//         if(arr.includes(newArr[i])){
//             arr.splice(arr.indexOf(newArr[i]),1);
//         }
//     }
//     for(let j=0; j<arr.length; j++){
//         sum += arr[j]
//     }
//     return sum;
// }

arr.forEach((_,i,newArr)=>{
    if(arr.includes(newArr[i])){
        arr.splice(arr.indexOf(newArr[i]),1);
    }
})
arr.forEach((_,j,newArr)=>{
    sum += newArr[j];
})

return sum;
}
console.log("case 1:", plusBot([1,2,3,4,6,7,8,0]))
console.log("case 2:", plusBot([5,8,4,0,6,7,9]))
