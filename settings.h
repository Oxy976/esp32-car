// Network settings

// вставляем ниже SSID и пароль для своей WiFi-сети:
const char* ssid     = "REPLACE_WITH_YOUR_SSID";
const char* password = "REPLACE_WITH_YOUR_PASSWORD";
// --
// пины к которым подключен контроллер моторов
// мотор 1:
int motor1Pin1 = 27;
int motor1Pin2 = 16;
int enable1Pin = 14;
 
// мотор 2:
int motor2Pin1 = 17;
int motor2Pin2 = 25;
int enable2Pin = 26;
// мотор 2:
//int motor2Pin1 = 12;
//int motor2Pin2 = 13;
//int enable2Pin = 5;
 
// переменные для свойств широтно-импульсной модуляции (ШИМ):
//частота – 30000 Гц, канал для генерирования сигнала – 0, разрешение – 8 бит
const int freq = 30000;
const int pwmChannel = 0;
const int resolution = 8;
int dutyCycle = 0;

// 
