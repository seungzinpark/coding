const aaa = ['melon', 'banana', 'lemon', 'tomato', 'grape'];
function searchMelon(fruits){
let flag = false;
    for(let i=0; i<fruits.length; i++){
        console.log(fruits[i]);
    }
    // if(fruits.includes('melon')){
    //     console.log("멜론 있습니다.");
    // } else{
    //     console.log("멜론 없습니다.");       
    // }
    let hasMelon = fruits.includes('melon') ? "멜론 있습니다" : "멜론 없습니다"
    console.log(hasMelon);
    // let 깃발 = flag ? "멜론이 있습니다" : "멜론이 없습니다"
    // console.log(깃발);

    return fruits.join('-');
}
console.log(searchMelon(aaa))