const num_list = [1,2,3,4,5,6,7]

function solution(num_list){
    let oddNum = 0;
    let evenNum = 0;
    num_list.forEach((value,index,arr)=>{
        if(value%2 == 0){
            oddNum++;
        }else{
            evenNum++;
        }
    })
    return [oddNum,evenNum];
}
console.log(solution([1,2,3,4,5,6,7]));