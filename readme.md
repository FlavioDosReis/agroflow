# 🌱 AGROFLOW - Sistema de Irrigação Automática com IoT

Projeto acadêmico desenvolvido para o curso de **Análise e Desenvolvimento de Sistemas** na UNIFEOB.  
O sistema utiliza **Arduino Uno**, **sensor de umidade do solo**, **motor CC com bomba de água** e **LCD 16x2 com I2C** para automatizar a irrigação agrícola.

---

## 📌 Objetivo
Automatizar o processo de irrigação, garantindo que o solo mantenha níveis adequados de umidade, reduzindo desperdício de água e custos de mão de obra.

---

## ⚙️ Hardware Utilizado
- Arduino Uno R3  
- Sensor de Umidade do Solo (SEN1)  
- Motor CC com bomba de água  
- LCD 16x2 com interface I2C  

---

## 💻 Código
O código principal está disponível em [`src/irrigacao_auto.ino`](src/irrigacao_auto.ino).  
Exemplo de lógica implementada:

```cpp
if (umi < 20) {
    digitalWrite(2, HIGH);  // Liga bomba
} else {
    digitalWrite(2, LOW);   // Desliga bomba
}
