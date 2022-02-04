    function sum() {
        a = document.calcul.num1.value;
        b = document.calcul.num2.value;
        document.calcul.result.value = parseInt(a)+parseInt(b);    }
    
    function sub(){
        a = document.calcul.num1.value;
        b = document.calcul.num2.value;
        document.calcul.result.value = parseInt(a)- parseInt(b);
    }
    
    function multi(){
        a = document.calcul.num1.value;
        b = document.calcul.num2.value;
        document.calcul.result.value = parseInt(a) * parseInt(b);
    }
    
    function div(){
        a = document.calcul.num1.value;
        b = document.calcul.num2.value;
        document.calcul.result.value = parseInt(a) / parseInt(b);
    }
    



    function displayResult(){

        switch (operateurs.value) {
            case '+':
                result.value = paseFloat(nb1) + parseFloat(nb2);
                break;
            case '-':
                result.value = paseFloat(nb1) - parseFloat(nb2);

                break;
            case '/':
                result.value = paseFloat(nb1) / parseFloat(nb2);

                break;
            case '*':
                result.value = paseFloat(nb1) * parseFloat(nb2);

                break;
        }
    }

    switch (operateurs.value) {
        case '+':
            
            break;
        case '-':
            
            break;
        case '/':
            
            break;
        case '*':
            
            break;
    }