<?php

class Data{
  var $nim;
  var $nama;
  var $kelas;
}

$data1 = new Data();

$data1->nim = "E1E121027";
$data1->nama = "FIQRAM FAATHIR";
$data1->kelas = "GANJIL";

$data2 = new Data();

$data2->nim = "E1E121026";
$data2->nama = "ANDIKA";
$data2->kelas = "GENAP";


var_dump($data1);
echo "<br>";
var_dump($data2);