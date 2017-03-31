void setup()/*Fungsi untuk menginisiasi variable, mode pin, dll.
Fungsi setup hanya dijalankan sekali saja setelah powerup atau reset*/
{
  Serial.begin(9600); /*Setting kecepatan transfer data*/
}
 
void loop() /*Fungsi untuk merubah/merespon program secara berulang(loop)*/
{
  Serial.println("Hello"); /*Mengirim data "Hello" ke serial port*/
  Serial.println("Nama : Saiful Arifin W.W."); /*Mengirim data "Nama : Saiful Arifin W.W."*/
  Serial.println("NIM : D400160065"); /*Mengirim data "NIM : D400160065"*/
  delay(1000); /*Delay selama 1 detik*/
}


