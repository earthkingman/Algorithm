// var numbers = [4,9,16,25,36];

// var result= numbers.map(Math.sqrt);
// console.log(result);

// var numbers2 = [1,2,3,4,5,6,7,8,9];

// var newnumber= numbers2.map(number => number *2);

// console.log(newnumber);


// var numbers3 = [1,2,3,4,5,6,7,8,9];


// var newnumber2 = numbers3.map(function(number){
//     return number *2;
//     });


    function multiplyTwo(number){

return number*2;

}

var numbers3 = [1,2,3,4,5,6,7,8,9];

var newnumber3= numbers3.map(multiplyTwo);

console.log(newnumber3)