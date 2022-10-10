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