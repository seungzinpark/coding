// // arr = [1,10,15,7,80,9] 일때 최댓값을 구하라.

// function solution(arr){
//     return arr.reduce((acc,cur,index,origin)=>{
//         if(acc<cur){
//             acc = cur;
//         }
//         return acc;
//     },-Infinity) 
// }
// console.log(solution([1,10,15,7,80,9]));

// 정수 배열 array가 매개변수로 주어질 때,
// 가장 큰 수와 그 수의 인덱스를 담은 배열을
// return 하도록 solution 함수를 완성해보세요.

// function solution(arr){
//     const max = arr.reduce((acc,cur,index,origin)=>{
//         if(acc < cur){
//             acc = cur;
//         }
//         return acc;
//     },-Infinity)

//     const maxIndex = arr.indexOf(max);
//     return [max, maxIndex]
    
// }
// console.log(solution([1, 8, 3]));

// 정수 num1과 num2가 매개변수로 주어집니다.
// 두 수가 같으면 1 다르면 -1을 retrun하도록 solution 함수를 완성해주세요.

// function solution (num1,num2){
//     return num1 === num2 ? 1 : -1;
// }
// console.log(solution(2,3));

// 최빈값은 주어진 값 중에서 가장 자주 나오는 값을 의미합니다.
// 정수 배열 array가 매개변수로 주어질 때, 최빈값을 return 하도록
// solution 함수를 완성해보세요. 최빈값이 여러 개면 -1을 return 합니다.

function solution(array){




}

console.log(solution([1, 2, 3, 3, 3, 4]));
