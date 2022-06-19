const aaa = ['melon', 'banana', 'lemon', 'tomato', 'grape'];
function searchMelon(fruits){
    for (value of fruits){
        console.log(value);
    }
    const hasMelon = fruits.includes('melon') ? "멜론 있습니다" : "멜론 없습니다"
    console.log(hasMelon);
    return fruits.join('-');
}
console.log(searchMelon(aaa))