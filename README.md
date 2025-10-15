📏 Projeto Medidor de Distância com Alerta Sonoro (Arduino)

Este projeto utiliza um sensor ultrassônico para medir distâncias e aciona alertas sonoros e visuais dependendo da proximidade do objeto detectado. É ideal para sistemas de monitoramento simples ou alarmes de proximidade.

🛠 Tecnologias utilizadas

Arduino – controle do sensor e atuadores.

C++ para Arduino – lógica de leitura do sensor e acionamento de alertas.

Sensor Ultrassônico (HC-SR04) – medição de distância.

Buzzer e LEDs – alertas sonoros e visuais.

🎮 Como funciona

O sensor ultrassônico mede a distância de objetos à frente.

Dependendo da distância:

< 75 cm: LED vermelho aceso e buzzer toca por 1,5 s.

75–150 cm: LED amarelo aceso e buzzer toca por 1 s.

≥ 150 cm: LED verde aceso e buzzer desligado.

A distância também é exibida no Serial Monitor.

💡 Funcionalidades

Medição precisa de distância.

Sistema de alerta sonoro e visual com LEDs e buzzer.

Atualização contínua com pequeno delay para performance.

Fácil adaptação para outros sistemas de alerta ou robótica.
