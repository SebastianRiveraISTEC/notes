# Introdução as redes e comunicação de dados

## Atributos dos protocolos

1. Tipos de comutação:	Modo como os mensagens são encaminhadas na rede
   1. Circuitos: Transporte de mensagens de uma ligação via circuito dedicado. Origem -> Rede -> Destino

   2. Pacotes: Transporte de mensagens de varias ligações partilham caminhos/recursos da rede. Nós da rede tem que processar mensagens para decidir o seu caminho para o respetivo destino. Poder potenciar atrasos de transmissão

      Circuitos: apropriado para serviços prioritários. ex. Telefone tradicional

      Pacotes : apropriado para serviços menos prioritários. Toleram atrasos. Ex. Email

   Atualmente comutação pacotes é mais usada do que comutação circuitos

   - Possibilita implementação de mecanismos de garantia de QoS -> Suportar multi-serviços
   - Mais flexível:
     - Suporta 2 modos de tipos de caminhos: Orientado e não orientado à ligação
     - Possível redefinir caminhos durante a comunicação
     - Pode transportar qualquer tipo de serviço

2. Tipo de caminhos

   1. Orientado à ligação. Todas as mensagens fazem o mesmo caminho na rede
   2. Não orientado à ligação. Diferentes mensagens podem fazer diferentes caminhos

3. Garantia de QoS

   1. Métricas que definem a prioridade das mensagens de um serviço
      1. Atrasos **Baixos**
      2. Perdas **Baixos**
      3. Ritmo de transmissão requerido **Constante**
   2. Mecanismos de garantia de QoS em redes de comutação pacotes
      1. Entrada da rede **Mais usado**: Classificação e marcação de mensagens em função da prioridade dos seus dados, para nós do interior da rede processarem as mensagem em função da prioridade marcada na entrada
      2. Reserva de recursos da rede para transporte de mensagens com diferentes prioridades
      3. Sobre-dimensionamento da rede

4. Controlo de erros da transmissão

   ppt

5. Controlo de fluxo de dados

   ppt

   

