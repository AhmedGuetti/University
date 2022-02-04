function check(){
var form = document.fromu;
var exInput =  document.formu.getElementsByTagName('input');
var s = document.getElementById('s')
//var err = [];
var err = 0;
for (var i = 0; i < exInput.length - 1; i++) {
  var value = parseInt(exInput[i].value);
  var label =  document.formu.getElementsByTagName('label')[i].getElementsByTagName('span');
  var n1 = parseInt(label[0].innerHTML);
  var n2 = parseInt(label[1].innerHTML);
  if (value != n1*n2) err++;
}

  s.innerHTML = exInput.length - 1-err+" GOOD";







}
