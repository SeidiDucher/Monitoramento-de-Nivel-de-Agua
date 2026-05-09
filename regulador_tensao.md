# Regulando a tensão com um Conversor DC-DC Step Down

O módulo regulador de tensão **LM2596** opera como um eficiente conversor DC-DC Step Down, capaz de reduzir uma carga de até 3A com eficiência superior. Sua versatilidade é evidente na faixa de tensão de saída ajustável, variando de 1,5V a 35V, enquanto a entrada abrange 3,2V a 40V.

## Características Principais
* **Tensão de entrada (2,3 V a 40 V):** Suporta uma ampla faixa de entrada, desde baterias até fontes convencionais.
* **Tensão de saída ajustável (3,2V a 40 V):** Oferece flexibilidade para adaptar-se a diferentes requisitos de projeto.
* **Eficiência de até 92%:** Minimiza as perdas de energia durante a conversão.
* **Função Step-Down:** Ideal para reduzir tensões altas para níveis seguros (ex: baixar 24V para os 5V do Arduino).

## Como funciona o Regulador LM2596?
Ele opera usando o princípio da modulação por largura de pulso (**PWM**), onde a tensão de entrada é comutada rapidamente em um ciclo de trabalho controlado, produzindo uma saída com a tensão desejada. É particularmente eficaz porque minimiza a perda de energia em forma de calor se comparado a reguladores lineares.

<img width="872" height="397" alt="image" src="https://github.com/user-attachments/assets/fb6a930b-1880-483f-95e5-b26bd0752f2b" />


## Pinagem do LM2596
* **IN+:** Conexão para a tensão de entrada positiva.
* **OUT+:** Conexão para a tensão de saída positiva.
* **IN- e OUT-:** Conexão do terra (GND) tanto da fonte quanto do circuito.

## Como conectar ao Arduino?
Siga estas etapas para uma alimentação estável:
1. Conecte o **IN+** ao polo positivo da sua fonte externa (ex: bateria 12V ou fonte 24V).
2. Conecte o **IN-** ao negativo da fonte.
3. **IMPORTANTE:** Antes de ligar ao Arduino, use um multímetro na saída (**OUT+** e **OUT-**) e gire o potenciômetro até atingir a tensão desejada (ex: 5V ou 7V-9V para o pino VIN).
4. Conecte o **OUT+** ao pino **VIN** (se > 7V) ou **5V** (se exatamente 5V) do Arduino.
5. Conecte o **OUT-** ao **GND** do Arduino.

<img width="770" height="400" alt="image" src="https://github.com/user-attachments/assets/968ab042-ccc1-499f-aa95-e91706c5bc22" />


## Especificações Técnicas
| Característica | Detalhe |
| :--- | :--- |
| **Modelo** | LM2596 |
| **Tensão de Entrada** | 3,2V – 40V |
| **Tensão de Saída** | 1,5V – 35V (Ajustável) |
| **Corrente de Saída** | 2A nominal / 3A máxima |
| **Eficiência** | Até 92% |
| **Frequência de Comutação** | 150 kHz |
| **Temperatura de Operação** | -40℃ a 85℃ |
| **Dimensões** | 46 mm x 22 mm |
