# 🌊 Monitoramento de Nível de Água com ESP8266 e Sensor Hidrostático

Este projeto descreve a implementação de um sistema de medição de nível de precisão industrial utilizando um sensor de pressão hidrostática (4-20mA) integrado ao ecossistema IoT via ESP8266.

## 🛠️ Materiais Detalhados

Para replicar este projeto, são necessários os seguintes componentes:

### 1. Sensor de Nível Hidrostático 
Diferente dos sensores ultrassônicos, este sensor mede a pressão exercida pela coluna de água.

* **Função:** Converte a pressão mecânica em um sinal elétrico analógico proporcional (corrente).
* **Saída:** Padrão industrial de **4-20mA**.
* **Vantagem:** Alta precisão e imune a vapores ou superfícies irregulares na água.

### 2. Módulo Conversor de Corrente para Tensão (HW-685)
Como o ESP8266 não consegue ler corrente diretamente, este módulo é a ponte necessária.

* **Função:** Converte o sinal de **4-20mA** do sensor em uma faixa de tensão (geralmente 0-3.3V ou 0-5V) ajustável via trimpot.
* **Importância:** Garante que o sinal de corrente seja traduzido para uma voltagem que o pino ADC do microcontrolador suporte.

### 3. Microcontrolador ESP8266 (NodeMCU)
O "cérebro" do projeto.

* **Função:** Processa o sinal analógico lido no pino **A0**, converte os valores brutos em unidades de medida (metros ou porcentagem) e envia os dados via Wi-Fi.
* **Destaque:** Permite a integração com protocolos como MQTT, HTTP ou dashboards como Blynk e TagoIO.

### 4. Regulador de Tensão Step-Down LM2596 DC-DC
Sensores industriais e módulos conversores geralmente operam em 12V ou 24V, enquanto o ESP8266 opera em 3.3V.

* **Função:** Reduz a tensão de uma fonte de alimentação externa (ex: 24V) para os níveis seguros do microcontrolador e demais componentes.
* **Eficiência:** Por ser um conversor chaveado, dissipa menos calor que reguladores lineares comuns.

---

## 🔌 Esquema de Conexão (Resumo)
<img width="881" height="506" alt="image" src="https://github.com/user-attachments/assets/6f660019-c365-4cf5-9f0f-148ce6eb7e9d" />

