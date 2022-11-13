// 문자열 my_str과 n이 매개변수로 주어질 때,
// my_str을 길이 n씩 잘라서 저장한 배열을
// return하도록 solution 함수를 완성해주세요.

function solution(my_str,n){
    let arr = []
    let counting = 0;
    for(let i=0;i<my_str.length;i++){
        if(i % n === 0){
            arr.push(my_str.slice(n*counting,n*(counting+1)))
            counting++;
        }
    }

    return arr;
}
console.log(solution("abc1Addfggg4556b",6));


function solution(my_str, n) {
    let res = [];
    for (let i = 0; i < my_str.length; i+=n) {
        res.push(my_str.slice(i, i+n));
    }
    return res;
}

