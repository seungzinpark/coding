// 최빈값은 주어진 값 중에서 가장 자주 나오는 값을 의미합니다.
// 정수 배열 array가 매개변수로 주어질 때,
// 최빈값을 return 하도록 solution 함수를 완성해보세요.
// 최빈값이 여러 개면 -1을 return 합니다.

function solution(array){
    const obj = array.reduce((acc,cur,index,origin)=>{
        acc[cur] = (acc[cur]||0)+1;
        return acc;
    },{})

    console.log(obj)
    // return obj;

    let maxValue = -Infinity;
    let maxKey = -Infinity;
    for(key in obj){
        // console.log(key)
        if(maxValue < obj[key]){
            maxValue = obj[key];
            maxKey = key;
        }
    }
    console.log("maxValue:", maxValue)
    console.log("maxKey:", maxKey)
}

console.log(solution([1, 2, 3, 3, 3, 4]	));