# Módulo Conversor de Corrente para Tensão HW-685

O conversor de corrente em Tensão **HW-685** é um módulo capaz de possibilitar a comunicação de sensores e atuadores industriais que operam com sinais de corrente na saída com microcontroladores como **Arduino, PIC, ESP8266/ESP32**, entre outros que trabalham com leitura de sinais de tensão.

<img width="722" height="579" alt="image" src="https://github.com/user-attachments/assets/8ae699d0-5e01-4399-8c88-13617e8ee5fc" />


## Funcionamento
Ele funciona recebendo sinais de corrente **4mA** (valor inicial) e **20mA** (valor máximo) e transforma esses valores em sinais de tensão que variam de **0V a 10V**. 

O desenvolvedor pode calibrar o módulo através de dois componentes principais:
* **Trimpot ZERO:** Define a tensão de saída para o valor de corrente inicial (ex: ajustar para 0V quando a corrente for 4mA).
* **Trimpot SPAN:** Define a tensão de saída máxima conforme a corrente final (ex: ajustar para 3.3V quando a corrente for 20mA).

Desta forma, você pode configurar esse range de acordo com o microcontrolador que está utilizando, já que alguns operam com sinais de 0 a 3.3V (ESP8266) e outros de 0 a 5V (Arduino).

## Configuração dos Jumpers
Este módulo possui 4 pinos para ajuste da faixa de tensão de saída via jumpers:

| Tensão Desejada | Configuração dos Jumpers |
| :--- | :--- |
| **2.5V** | Pinos 1 e 2 abertos; Pinos 3 e 4 conectados. |
| **3.3V** | Todos os pinos abertos. |
| **5.0V** | Pinos 1-2 conectados; Pinos 3-4 conectados. |
| **10.0V** | Pinos 1 e 2 conectados; Pinos 3 e 4 abertos. |

## Conexões e Interface
* **Entrada de Corrente:** Par de bornes a parafuso (+ / -).
* **Alimentação e Saída:** Trio de bornes contendo:
    * **VCC:** Alimentação da placa.
    * **GND:** Terra comum.
    * **VOUT:** Tensão de saída para o pino analógico (ADC).
* **Fixação:** Possui 4 perfurações para montagem em painéis ou cases.

## Especificações Técnicas
* **Modelo:** HW-685;
* **Tensão de Alimentação:** DC 7V ~ 12V (A alimentação deve ser maior que a tensão desejada na saída);
* **Sinal de Entrada:** Corrente de 4 a 20mA;
* **Sinal de Saída:** Tensão 0 ~ 2.5V, 3.3V, 5V, 10V;
