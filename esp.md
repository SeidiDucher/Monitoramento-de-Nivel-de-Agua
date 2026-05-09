# Microcontrolador ESP8266

## O que é ESP8266?
O **ESP8266** é um microcontrolador de baixo custo e baixo consumo de energia, com um sistema Wi-Fi integrado. Ele foi desenvolvido pela empresa chinesa Espressif Systems e lançado em 2014. O ESP8266 possui um processador de 32 bits e uma unidade de processamento de sinal digital (DSP), além de memória flash embutida e interfaces de entrada/saída (I/O).

O ESP8266 é amplamente utilizado em projetos de **IoT (Internet das Coisas)**, devido à sua capacidade de se conectar a uma rede Wi-Fi e enviar e receber dados pela internet. Ele pode ser programado utilizando a linguagem de programação C++, assim como outras linguagens de programação populares, como MicroPython e Arduino IDE.

Existem diversas placas de desenvolvimento que utilizam o ESP8266, como a **NodeMCU** e a **Wemos D1 Mini**, que facilitam a criação de projetos.

## Como usar o ESP8266?
Usar o ESP8266 é muito simples, basta conectar ao computador e fazer a programação na própria IDE Arduino.

<img width="620" height="606" alt="image" src="https://github.com/user-attachments/assets/d36879b5-3eb2-4d4b-a146-6e924a8a386c" />


### Passo a Passo para Configuração:

1. **Instalar o ambiente de desenvolvimento:** Utilize a plataforma [Arduino IDE](https://www.arduino.cc/en/software).
2. **Adicionar o suporte para o ESP8266:** Vá em `Arquivo` > `Preferências` e adicione a seguinte URL em "URLs Adicionais para Gerenciador de Placas":
   `http://arduino.esp8266.com/stable/package_esp8266com_index.json`
3. **Instalar o pacote:** Vá em `Ferramentas` > `Placa` > `Gerenciador de Placas`. Pesquise por "ESP8266" e instale o pacote "ESP8266 Community".
4. **Selecionar a placa:** Escolha o modelo que você está utilizando em `Ferramentas` > `Placa`.
5. **Conectar e Programar:** Conecte via USB, selecione a `Porta` correta em `Ferramentas` e clique em **Enviar**.
6. **Monitor Serial:** Use o `Monitor de Serial` em `Ferramentas` para ver a saída de dados.

## Como conectar o ESP8266 com Arduino?
O ESP8266 pode ser usado como um módulo Wi-Fi para o Arduino. As formas mais comuns são:

* **Comunicação Serial:** Conectando os pinos RX e TX do ESP8266 aos pinos TX e RX do Arduino.
* **Placa Adaptadora:** Placas que se encaixam no Arduino e já possuem reguladores de tensão embutidos.

**Atenção:** Garanta que os níveis lógicos sejam compatíveis. O ESP8266 opera em 3.3V.

## Datasheet e Informações Técnicas
O Datasheet do ESP8266 contém todas as informações técnicas sobre características físicas e elétricas. Ele pode ser encontrado em sites especializados e fabricantes.

## Alimentação e Nível Lógico
* **Tensão de Operação:** Geralmente entre **3.3V e 6V DC** (dependendo do modelo da placa de desenvolvimento).
* **Corrente:** Pode consumir até **250 mA**. Recomenda-se o uso de capacitores para estabilidade.
* **Nível Lógico:** O ESP8266 é um dispositivo de **3.3V**. Se conectar a dispositivos de 5V (como alguns Arduinos), é necessário usar conversores de nível lógico para evitar danos.
