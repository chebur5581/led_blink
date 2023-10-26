#define LED 2                // созаём define для пина (прописываем МАКРОС)

void setup()
{
  pinMode(LED, OUTPUT);      // настраиваем 2-й пин на вывод
}

void loop()                  // бесконечный цикл
{
  digitalWrite(LED, HIGH);  // зажигаем светодиод
  delay(1000);               // ждём 1 секунду
  digitalWrite(LED, LOW);    // гасим светодиод
  delay(1000);               // ждём 1 секунду
}							 // и всё сначала
