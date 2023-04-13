
function fizzbuzz(){
    let x = prompt('enter some data : ');
    // console.log(typeof(x));
    let sum=0;
    let y="";

    for(let i=0;i<x.length;i++){
         sum+=x[i]-'0';
    }

    for(let i=1;i<=sum;i++){
         if(i%4===0 && i%5===0){
              y+="Fizz ";
          }
          else if(i%4===0) {
               y+="Buzz ";
              
          }

          else if(i%5===0) {
               y+="FizzBuzz ";
              
          }

          else{
              y+=i+" ";

          }
    }
    console.log(y);
}

fizzbuzz();
