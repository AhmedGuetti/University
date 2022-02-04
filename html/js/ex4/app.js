function sum(a,b){
    if(a>b) return false;
    if(a==b) return a;

    var sum = 0;
    for (var i = a; i <= b; i++) sum += i; //sum = sum + i

    return sum;
}


