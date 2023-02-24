
### 6 - 14

**Rede de computadores:**
- Conjunto de computadores/terminais ligados entre si ou via outros elementos da rede (encaminhadores) através de um determinado suporte físico (meio de transmissão)
- Meio de transmissão suporta a comunicação de dados entre os computadores/terminais, de acordo com determinadas regras (protocolos)

**Componentes de uma rede de computadores:**
- Computadores/Terminais (no mínimo 2), ex PCs, impressoras, servers, smartphones, etc.
- Elemento de rede encaminhadores. Ex. routers, switches
- Meios de transmissão. Ex. wireless, cabo coaxial, fio de cobre

**Objetivos de uma rede de computadores:**
- Permitir que diversos computadores comuniquem entre si e disponibilizem serviços
	- Aumento de produtividade + redução de custos financieros e humanos
- Facilitar centralização de administração e segurança
- Partilha de ficheiros
- Partilha de periféricos

As redes de computadores são utilizadas em quase todas as áreas: nas empresas, nas casas, nas coisas.

**Sem** uma rede de computadores:
- O acesso à informação e serviços seria mas lento e mais custoso
- Os serviços online não seriam possíveis
- A produtividade sería menor e mais custosa

**Com** uma rede de computadores:
- O acesso à informação passa a ser independente da localização
	- Globalização via internet

Vantagens para as pessoas individuais:
- Aumenta produtividade
	- Comunicação pessoal (e-mail, chat, videochamadas, etc)
	- Redes sociais
- Acesso a informação remota
	- Info noticiosa
	- Serviços online
- Entretenimento interactivo:
	- Jogos
	- Streaming
- Redução de custos na:
	- Comunicação
	- Acesso a info

**Internet**
- Posibilita o acesso universal a informação/serviços remotos
	- Globalização (Independência da localização)
	- Transformação digital (Info/serviços à distancia de um click)
- Posibilita a comunicação pessoal universal à escala planetaria

Definição tecnica da internet
- Conjunto de redes (e terminais) heterogeneas (interligadas entre si), independentes de tecnologia e meio fisico de transmissão que têm em comum a utilização dos protocolos TCP ou UDP, e IP.

Protocolos de transporte de mensagens (C4 OSI): TCP ou UDP
- TCP (Transmission Control Protocol) Garante fiabilidade da ligação com sincronismo entre terminais (sincrona)
- UDP (User Datagram Protocol) Não garante fiabilidade da ligação e sem sincronismo entre terminais (assincrona)

Protocolo de encaminhamento de pacotes (mensagens C3 OSI):

- IP (Internet Protocol)
	- Possibilita o encaminhamento de mensagens (em pacotes IP) entre dois terminais, em quaisquer redes
	- Suporta a comunicação planetaria/universal entre pessoas e/ou maquinas

---
### 17-21

- Atributos da comunicação de dados

- **Tipos de Comutação**: modo de encaminhamento das mensagens na rede:
	- Circuitos
	- Pacotes

- **Tipos de Caminhos**: definição do modo de caminho das mensagens na rede:
	- Com conexão/Orientados à ligação
	- Sem conexão/Não orientados à ligação

- **Garantia de QoS** (Quality of service): definição da prioridade para processamento e encaminhamento de mensagens na rede

- **Controlo de erros**: deteção da eventual existência de erros nas mensagens transportadas no meio de transmissão

- **Controlo de fluxo**: possibilidade de recetor informar emissor de quantidade de dados que pode receber deste num dado instante

**Comutação de circuitos vs. comutação de Pacotes**

- Comutação de circuitos (Circuit switch):
	- Establece uma conexão física desde o emissor ao recetor
	- Possibilidade de não ser possível transmissão de mensagens por congestionamento da rede (Impossível establecer ligação dedicada, não existencia de "linha livre"). Ex. Pico de tráfego de serviço de telefone móvel na passagem de ano
	- Após estabelecimento de ligação (circuito) não existem atrasos de propagação
		- Rede não efetua processamento ou armazenamento da informação que nela circula
	- Apropiado para aplicações de ritmo constante
		- Voz / telefone tradicional
- Comutação de Pacotes (Packet Switch):
	- Mensagens de diferentes aplicações e utilizadores partilham recursos da rede (não usam ligações dedicadas):
		- Não necessário estabelecimento de circuito dedicado entre emissor e recetor
			- Sempre possível transmissão de mensagens do emissor para a rede
		- Necessidade de processamento de mensagens em nós da rede
			- Possibilidade de existência de atrasos em virtude de: 
				- sobrecarga de tráfego na rede
				- sobrecarga das filas de espera (buffers) dos comutadores
				- possibilidade de perdas de mensagens (congestão extrema)
	- Ex. Transmissão de serviços de dados não prioritários : e-mail

**COMUTAÇÃO DE PACOTES**(MAIS UTILIZADO)
- Possibilita a implementação de mecanismos de garantia de QoS para transportar aplicações multimedia
- Maior flexibilidade
	- Potencia uma melhor ocupação dos recursos da rede por partilha dos mesmos
	- Facilita a utilização/definição de caminhos alternativas durante a comunicação
	- Podem transportar quaisquer tipo de serviços
- Mais económicos e simples
	- Equipamentos mais económicos e de mais simples configuração e gestão
	- Dados podem ser transmitidos via internet
---
### 23-27

**Serviços orientados à ligação vs. não orientados à ligação**

Orientados a ligação (Connection-oriented):
- Todas as mensagens da mesma ligação fazem o mesmo percurso (Ordem cronológica na chegada)
- Modelados a partir do sistema telefónico, ligação com 3 fases
	- Establecimiento
	- Transferencia de dados
	- Terminação
- Pode ser usado em Comutação de Circuitos o Pacotes
- Apropriado para aplicações mais prioritarias

Não orientados à ligação:
- Mensagens da mesma ligação podem não fazer o mesmo percurso
- Modelados a partir do sistema de correio postal
- Comunicação a partir de mensagens independentes
	- Mesmo destino / percursos diferentes
- Só pode ser usado em Comutação de Pacotes

**Garantia de Qualidade de Serviço**
- É um atributo que define a sua prioridade avaliada pelos seguintes parâmetros:
	- Perdas de dados por
		- Sobrecarga da rede
		- Encaminhamento incorreto
	- Atrasos ou variações de atrasos (jitter) na receção de dados por
		- Sobrecarga da rede
	- Ritmo da Transmissão requerido
	- **QoS c\\ + Prioridade** $\rightarrow$ **Menos perdas, menos atrasos, ritmo necessário e constante**
	- Rede deve satisfazer QoS acordado para suporte a determinado serviço, podendo usar os seguintes mecanismos (redes PS): (Nas redes CS apenas faz sentido falar em QoS no acesso à rede)
		- Marcação, diferenciação e encaminhamento de mensagens em função de diferentes prioridades
		- Reserva de recursos e encaminhamento de mensagens em função das diferentes prioridades
		- Sobredimensionamento da rede

**Controlo de erros**

- Controlo de erros de transmissão
	- Anexação à mensagem da aplicação de informação adicional redundante para controlo de error de transmissão no recetor/destinatario
![[Pasted image 20230220235030.png]]

**Controlo de fluxo de dados**

- Protocolo que regula o debito da transmissão
(recetor informar emissor de timing e volume de dados máximo que pode receber num dado instante $\rightarrow$ Evita necessidade de retransmissão de mensagens por erros/perdas)

- Terminais emissor e recetor podem não ter a mesma capacidade de processamento de dados

- Garantir que recetor consegue processar/armazenar volume de mensagens recebidas

---
### 29

**PROTOCOLOS**:

Regras para possibilitar a comunicação entre diferentes elementos de rede com possíveis diferentes formas de representar a mesma informação

---
### 33

Ver slide

---
### 36

Objectivos da segmentação de dados em pacotes mais pequenos

- Redução dos atrasos de tempo de transmissão
- Redução das dimensões das filas de espera de buffers dos nós da rede
- Adaptação a formato de protocolos de camadas inferiores
- Respeitar MTU (Maximum Transmission Unit) de redes
- Possibilidade de intermediar pacotes de diferentes utilizadores

---
### 38-39

**Cabeçalhos**
- Campo com info de controlo dos protocolos anexada a campo dados
- Necessarios para novos pacotes após divisão de dados na Origem
- Maior complexidade $\rightarrow$ Intro de mais info de controlo
- Comvem existir compromisso entre tamanho de campos de dados e cabeçalho $\rightarrow$ tirar vantagem de dimensão de pacotes mais pequenos
- Aconselhável cabeçalho/dados inferior a 10%

---
### 43-44

MODELO OSI, ver slides

---

### 50

Modelo TCP/IP

Usado em redes IP externa (internet) ou internas (intranet)

7&6&5 de OSI $\rightarrow$ Unica camada de aplicação
Camada 3 com protocolo IP e Camada 4 com protocolos TCP ou UDP

---
### 56

**Ethernet**

- Tecnologia mais utilizada em LANs
- Efetua control de erros e acesso a meio de transmissão
- Baixo custo
- Facil de implementar e gerir
- Flexivel: suporta outras topologias, redes maiores e meios de transmissão mais rapidos
	- Topologia estrela
	- Redes MANs e WANs c\\ Gigabit ethernet
	- Meios de transmissão fibra otica
-  Controlo de acesso a rede com meio de Tx partilhado
	- So pode transmitir um terminal de cada vez e quando o meio de transmissão estiver livre

---

### 72-73

Meios de transmissão:
- Guiados
	- Fio de cobre, Cabo coaxial, Fibra Óptica
- Não guiados
	- Sem fios (wireless)

- Fio de cobre
	- Tx sinais eletricos
	- Economico
	- Facil instalação
	- Baixa imunidade a interferencias
	- Grande atenuação. Melhor em distancias curtas
	- Aplicações: telefone (inicial), xDSL de suporte a 3play
- Cabo Coaxial
	- Tx sinais eletricos
	- Maior imunidade a interferencias por causa da blindagem
	- Maiores velocidades de Tx em largas distancias do que cobre
	- Aplicações: TV cabo, LANs (iniciais), DOCSIS de suporte a 3play (Tv, net, telefone)

---
### 75 -77

- Fibras Oticas
	- Tx de sinais oticos a uma dada frequencia
		- Converte sinal eletrico de terminais em luz para fibra
	- Componentes: Vidrio (melhor desempenho), plastico
	- Pequeno tamanho e peso
	- Maior imunidade a interferencias
	- Baixa atenuação
	- Suporte a grandes velocidades de transmissão
	- Desvantagens:
		- Instalação mais cara do que cobre
		- Ligações de terminações (alinhamento das fibras)
	- Aplicações
		- Interligação de redes (backbone)
		- Comunicações de longa distancia, MANs e WANs
		- Ligações residenciais (FTTH-FiberToTheHome)
	- Incentivos
		- Necessidade de maior largura de banda para satisfazer massificação de conteúdos mais exigentes (Formatos HD)
		- Desempenho de cobre e cabo condicionados por atenuação e limitados a pequenas distancias
- Comunicação sem fios(wireless)
	- Transmissão de ondas eletromagneticas atraves do ar:
		- Ondas radio
		- Micro ondas
		- Bluetooth
	- Tecnologia recente e com padia expansão
	- Velocidades de transmissão em crescimento mas em media ainda inferiores a cobre e cabo
		- Atenuação condicionada pela frequencia e obstaculos ao sinal
	- Suporte a mobilidade
	- Instalações temporarias
	- Poupança de cablagem

---
### 79-89

**Dispositivos de conectividade**

Dispositivos que possibilitam a comunicação entre redes e terminais não ligados entre si. Encaminham mensagens.

- **Repetidores**
	- Regeneram (amplificam) sinal
	- Não processam conteúdo do sinal
- Hubs
	- Concentrador de trafego de diferentes terminais
	- Utilizados para ligar terminais de uma mesma LAN
	- Não processam conteúdo do sinal
- Switch(comutador)
	- Encaminhador de mensagens
		- Verificação de endereço de terminal destino
		- Comutação de trama para porta com ligação a terminal destino
		- Funções de Camada Ligação de Dados (Camada 2 OSI)
	- Usado com topologia em estrela
	- Vantagens:
		- Maior eficacia no funcionamento da rede
		- Aumenta capacidade da rede, possibilita ligações simultaneas em pares de terminais
		- Reduz tempo de espera das comunicações
			- Hub propaga mensagem recebida por todos os terminais ligados ao mesmo
			- Hub so permite 1 comunicação de cada vez
- Bridge
	- Ligação de 2 ou mais segmentos de LANs (bridged LAN)
	- Possibilita ligação de LANs de diferentes tecnologias
- Routers
	- Possibilitam encaminhamento de mensagens entre diferentes redes
		- Redes autonomas e de diferentes tecnologias/dimensão(heterogeneas)
		- Encaminhamento de pacotes entre redes com base em processamento de endereço destino público de significado universal (IP) (Camada Rede, 3 OSI)
	- Contem tabelas de routing com informação de caminho apropiado
		- Estaticas-> Caminho invariavel
		- Dinamicas -> Caminho variavel em função do estado da rede
			- Controlo mais eficaz de cenarios de congestionamento
			- Apropriado para redes maiores

- Router $\rightarrow$ Camada Rede 3 OSI
- Switch, bridge $\rightarrow$ Camada Ligação de Dados  2 OSI
- Hub, repetidor $\rightarrow$ Camada Fisica 1 OSI


- Endereço local: Identificador fisico local emplaca NIC
	- MAC Address (Medio Access Control, sub camada de camada 2 OSI)
- Endereço publico: Identificador logico universal $\rightarrow$ IP Address (camada 3 OSI)

---
### 92-100


**TOPOLOGIAS DE REDE**

Define a forma como os nós da rede estão ligados entre si

- Malha completa(full-mesh):
	- todos os nós estão ligados diretamente entre si
	- Elevado desempenho
	- Elevada redundancia de caminhos
	- Atraso minimo
	- Dificuldade de expansão/gestão de rede
	- Topologia pouco realista e usada em LANs
- Malha incompleta(interligação parcial)
	- Apenas alguns nós estão ligados diretamente entre si
	- Bom desempenho
	- Nós com mais trefego entre si continuam ligados diretamente
	- Mais utilizada que interligação completa
		- Menor custo
		- Mais facil expansão
	- Atraso de mensagen dependente de necessidade de passagem por nós intermedios
- Estrela
	- Todos os nós perifericos/terminais com ligações dedicadas a um nó central
	- Topologia hoje mais usada em LANs
	- Encaminhamento de mensagens entre nós terminais sempre via nó central
	- Escalavel, facilidade de expansão
	- Capacidade limitada pelo numero de portas de nó central
	- Baixo custo
	- Desempenho e fiabilidade limitados pelo nó central $\rightarrow$ Single Point of Failure
		- Nó central mais complexo
			- Encaminhador de mensagens
			- Exemplo: switch
		- Nós perifericos mais simples
			- Não encaminham mensagens
			- Apenas originam e recebem mensagens
- Árvore
	- Características semelhantes às da topologia em estrela
	- Ver imagem slide (61)
- Bus
	- Todos os nós estão ligados a um meio de transmissão comum
	- Requer mecanismos de controlo de acesso meio de Tx partilhado 
		- Collision detection
		- Só pode transmitir um nó de cada vez
		- Só pode transmitir mensagens quando o meio de Tx estiver livre
	- Facilmente expansível
	- Baixo custo
	- Cada nó monitoriza o bus e copia apenas mensagens que lhe são destinados
	- Mensagens removidos nas terminações do Bus
	- Corte no meio de transmissão pode originar paragem da rede
- Anel
	- Cada nó esta ligado a outros dois nós em circuito fechado
	- Nós com função de encaminhador e terminal
	- Difícil gestão(Falha num nó e/ou quebra numa ligação pode originar paragem da rede)
	- Requer mecanismo de controlo de acesso ao meio
	- Ex Token Ring
		- Token: padrão de bits que circula por todos os nós. 
		- Nós só podem transmitir/receber mensagens quando token passar por nó
		- Confirmação de receção:
			- Recetor: modifica bit de ACKnowledge de cabeçalho de mensagem
			- Emissor: remove mensagem por ele transmitido, após volta completa
	- Atualmente mais usado em redes grandes, ex. MANs

**METODOS DE ACESSO AO MEIO DE TRANSMISSÃO**

- CSMA (Carrier Sense Multiple Access)
	- Método de acesso a meio de Tx partilhado "com competição entre terminais" mais popular
	- Apropriado para LANs
		- Tempos de propagação pequenos (Semelhante entre todos os pares fonte-destino)
		- Estado do canal pode ser detetado rapidamente

Processo CSMA

1. Nó emissor de mensagem escuta se meio de transmissão está livre
2. Se estiver ocupado $\rightarrow$ esperar que meio fique livre para transmitir
3. Quando estiver livre $\rightarrow$ transmite mensagem 
	1. Mensagem transmitida com sucesso sem erros/colisões (cenario ideal)
	2. Mensagem colide com outra mensagem de outro nó $\rightarrow$ Necessario retransmitir mensagem
4. Se necessario retransmissão de mensagem
	1. Emissor esperar tempo aleatorio para poder retransmitir mensagem
		1. Colisão causada por outro computador ter transmitido uma mensagem no mesmo instante
		2. Para impedir repetição de colisão das mesmas mensagem 2 emissores deverão esperar tempos aleatorios diferentes para retransmissão das mesmas mensagens


- Token Ring:
	- Método de acesso a meio de transmissão partilhado "sem competição entre terminais"
Processo
- Nó insere a sua mensagem à frente de testemunho (token) e atras de outras eventuais mensagens que já circulem, no "comboio" de mensagens à frente do testemunho
- Após volta completa, a mensagem (agora) inseria é a 1ª mensagem do "comboio"
	- Facilitar remoção de mensagem, por nó emissor da mesma
	- Nó emissor vai poder fazer o controlo de integridade da mensagem transmitida e após volta completa na rede
- Monitorização de mensagens
	- Todo os nós monitorizam as mensagens que estão na rede
	- Responsaveis por identificar e aceitar as mensagens que lhe são dirigidas + modificar bit de ACK, para confirmação de leitura da mensagem por nó emissor
	- Reencaminham para nó seguinte todas as mensagens

Metodos de Competição/ sem competição

Métodos Sem competição são mais apropriados para redes que operam sob as seguintes condições
- Sobrecarga de tráfego
- Transporte de dados sensíveis a atrasos temporais
	- Atrasos mais regulares e previsíveis do que em competição
- Mecanismos de controlo da rede
	- Definição de prioridades entre nós (multiplexação estatistica)

---
### 103-106

**Topologias de redes WI-FI**

Rede local sem Fuis Wi-Fi(Wireless Fidelity) ou WLAN (Wireless LAN)

Redes estruturadas: todas as comunicações de terminais moveis feitas via Ponto de Acesso (Antena/switch)

Riscos de segurança das redes sem fios:
- Comunicação utiliza canais radio em modo de difusão (broadcast)
- Qualquer terminal dentro de área de difusão de antena transmissora pode receber o sinal com a info transmitida, mas com apenas um destino

Mecanismos de suporte à evolução de velocidades de transmissão em meio de meio de Tx sem fios partilhado

- Uso de canais com maior largura de banda em frequencias mais elevadas
- Uso de multiplos pares de antenas emissoras/receptoras
- Uso de tecnologias de transmissão de dados com maior eficiencia espectral $\rightarrow$ transmitir maior volume de daods nos mesmos recursos radio

---
### 111

**CSMA/CA em rede sem fios (Collision avoidance)**

Sinais de radio broadcast mais sujeitos a fenomenos naturais de interferencias e atenuações

- Maior necessidade de evitar colisões de mensagens
- Possibilitar uma melhor qualidade das redes wifi

Após verificação que canal está livre (CSMA)
- Comunicar à rede intenção de usar meio de transmissão durante intervalo de tempo (time slot)