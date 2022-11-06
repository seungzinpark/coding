// n을 입력받아서 n까지의 홀수 합을 구하시오.

function solution(n){
    const arr = [];
    for(let i=1;i<=n;i++){
        arr.push(i);
    }
    console.log("arr:",arr);
    const oddArr = arr.filter((value)=>{
        if(value % 2 === 1){
            return true;
        } else{
            return false;
        }
    })
    console.log("oddArr:",oddArr);
    const sum = oddArr.reduce((acc,currentvalue,index,origin)=>{
        acc = acc + currentvalue;
        return acc;
    },0)
    return sum;
}
console.log(solution(10));