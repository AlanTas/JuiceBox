

const int linhaMax = 13;
const int colunaMax = 13;
int matriz_Main[linhaMax][colunaMax];

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  Serial.println ("");
  Serial.print ("Matriz Principal");
  Serial.println ("");

}

void loop() {
  // put your main code here, to run repeatedly:

  funcaoRetornaMatriz();

  for (int a = 0; a < 13; a++){
    Serial.print ("[");
    for (int b = 0; b < 13; b++) {
      Serial.print (matriz_Main[a][b]);
    }
    Serial.print ("]");
    Serial.println("");
  }
}

void funcaoRetornaMatriz(){

  bool matriz_P1[5][3] = { { 1,0,0 },
                           { 0,1,0 },
                           { 0,0,1 },
                           { 0,1,0 } };
  
  bool matriz_P2[5][3] = { { 1,0,0 },
                           { 1,0,0 },
                           { 1,0,0 },
                           { 1,0,0 },
                           { 1,0,0 } };
                         
  bool matriz_P3[5][3] = { { 0,1,0 },
                           { 0,1,0 },
                           { 0,1,1 },
                           { 0,1,0 },
                           { 0,1,0 } };
                         
  bool matriz_P4[5][3] = { { 0,0,1 },
                           { 0,0,1 },
                           { 0,0,0 },
                           { 0,0,1 },
                           { 0,0,1 } };

  bool matriz_P5[5][3] = { { 0,0,0 },
                           { 0,1,0 },
                           { 0,0,0 },
                           { 1,1,1 },
                           { 1,1,1 } };
                           
  bool matriz_P6[5][3] = { { 0,0,0 },
                           { 1,1,1 },
                           { 0,0,0 },
                           { 1,1,1 },
                           { 0,0,1 } };



  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 3; j++) {
      matriz_Main[i+1][j+1] = matriz_P1[i][j];  
    }
  }
  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 3; j++) {
      matriz_Main[i+1][j+5] = matriz_P2[i][j];
    }
  }
  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 3; j++){
      matriz_Main[i+1][j+9] = matriz_P3[i][j];
    }
  }
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 3; j++) {
      matriz_Main[i+6][j+1] = matriz_P4[i][j];
    }
  }
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 3; j++){
      matriz_Main[i+6][j+5] = matriz_P5[i][j];
    }
  }
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 3; j++){
      matriz_Main[i+6][j+9] = matriz_P6[i][j];
    }
  }
}

