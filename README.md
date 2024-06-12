<h2>Membros da Equipe:</h2>

Anthony Motobe - 558488

Victor Pacifico Dias - RM558017

Arthur Rodrigues - RM555342

Guilherme Abe - RM554743

Gustavo Paulino - RM554779


<h2>Materiais Necessários para o Projeto:</h2>

Arduino Uno R3

Sensor DHT22

Sensor MPU6050

Protoboard ou Breadboard(Opcional)

Cabos Jumpers

<h2>Conexões dos Sensores</h2>

<h3>Sensor DHT22</h3>

VCC: Conectar ao pino de 5V do Arduino

GND: Conectar ao pino GND do Arduino

Data: Conectar ao pino digital 8 do Arduino

<h3>Sensor MPU6050</h3>

VCC: Conectar ao pino de 5V do Arduino

GND: Conectar ao pino GND do Arduino

SCL: Conectar ao pino A5 (SCL) do Arduino

SDA: Conectar ao pino A4 (SDA) do Arduino

<h3>Montagem do Circuito</h3>

Conecte o sensor DHT22 ao Arduino conforme as instruções dadas acima, logo em seguida conecte o sensor MPU6050 ao Arduino conforme as instruções acima. Depois verifique se todas as conexões estão firmes e corretas antes de ligar o Arduino, logo em seguida carregue o Código
Carregue o código fornecido no Arduino através da IDE do Arduino.
Após carregar o código, ligue o Arduino.
Os dados de temperatura, aceleração e giroscópio serão exibidos no display LCD.

<h3>Descrição do Projeto:</h3>

O sistema desenvolvido utiliza o Arduino Uno R3, um sensor DHT22 para medir a temperatura e um sensor MPU6050 para capturar os dados de aceleração e giroscópio. Os dados coletados são exibidos em um display LCD I2C de 20x4. Este hardware pode ser usado para monitorar as condições do piloto, e as forças exercidas sobre ele durante o percurso. Nos passando uma visão da sensação na qual ele está vivenciando. Esses dados podem ser utilizados para melhorar o desempenho dos pilotos, e garantir uma melhor segurança para eles.

<h2>Instruções de Uso:</h2>

<h2>Dependências</h2>
O código necessário está disponível tanto no arquivo .cpp deste projeto quanto, no projeto simulado pelo site Wokwi. Recomendamos que primeiro execute o projeto nos simuladores online antes de implementá-lo fisicamente na IDE do Arduino.

<h2>Observações Feitas:</h2>

Baixe as bibliotecas necessárias na IDE do Arduino: LiquidCrystal_I2C, MPU6050_tockn, e DHT.

Em casos de dificuldades durante a execução ou montagem do protótipo, consulte a documentação das bibliotecas utilizadas para verificar se há atualizações ou ajustes necessários.

<h2>Link do Projeto</h2>

Projeto realizado no site Wokwi: https://wokwi.com/projects/400360837759697921
