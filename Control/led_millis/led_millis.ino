/*By: Mario Alo
 * Visiten mi pagina en fb www.fb.com/LosMejoresContenidosParaTi
 * Visiten mi blog en www.descargatuscosas.blogspot.com
 * Suscribanse a mi canal en YouTube https://www.youtube.com/user/descargatuscosas
 */
int led = 2;
unsigned long t_esperado = 43000000; //tiempo de espera
unsigned long t_actual = 0; //Tiempo que esta transcurriendo
unsigned long t_previo; //tiempo que se actualizará
boolean estado = true; 
void setup() {
  pinMode(led, OUTPUT);
  
}

void loop() {
  
  t_actual = millis();
  if ((unsigned long)(t_actual - t_previo)>= t_esperado){
      estado = !estado;
      
      t_previo = millis();
  }
  digitalWrite(led, estado);
}
