/* ECMASCRIPT 6*/
//function moyen(array) {
//    return array.reduce((a, b) => a + b) / array.length;
//}


function moyen(array){
    var moy = 0;
    var i;
    for(i = 0; i< array.length ; i++) moy+= array[i];
    return  moy/array.length;
}

// Variables 
var modules = new Array("Programmation C", "Web" , "Electronic" ,"Probability","Linux","Alghorithm");
var note = new Array();
var loser = new Array();
var i;

//get Information 
for (i = 0; i < modules.length ;i++) {
    note.push(parseInt(prompt(modules[i]," ")));
}

for (i = 0; i < note.length ;i++) if(note[i] <= 5) 
loser.push(parseInt(prompt(loser[i]," ")));

//Print Information 
for (i = 0; i < note.length ;i++) {
  document.write(modules[i]," : ",note[i],"</br>");
}
var resultmoyen = moyen(note);
document.write("Le moyen des notes est : ", resultmoyen ,"</br>");








