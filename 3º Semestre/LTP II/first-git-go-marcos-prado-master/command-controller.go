package main

type Name string

const (
	GITSTATUS   Name = "git status"
	GITCOMMIT        = "git commit"
	GITINIT          = "git init"
	GITCLONE         = "git clone"
	GITPUSH          = "git push"
	GITPULL          = "git pull"
	GITADD           = "git add"
	GITCHECKOUT      = "git checkout"
	GITBRANCH        = "git branch"
	GITLOG           = "git log"
	GITSHORTLOG      = "git shortlog"
	GITCLEAN         = "git clean"
)

var CommandMap = map[Name]Command{
	GITSTATUS:   Command{"Comando utilizado para verificar as mudanças nos arquivos de um projeto."},
	GITCOMMIT:   Command{"Comando utilizado para levar as mudanças de um ambiente local para um repositório git, com a opção de inserir uma mensagem descritiva (-m [mensagem])."},
	GITINIT:     Command{"Comando utilizado para inicializar um repositório local."},
	GITCLONE:    Command{"Comando utilizado para clonar um repositório remoto git para sua máquina."},
	GITPUSH:     Command{"Comando utilizado para de fato enviar as mudanças locais para o repositório git."},
	GITPULL:     Command{"Comando utilizado para trazer as mudanças do repositório git para seu repositório local."},
	GITADD:      Command{"Comando utilizado para preparar arquivos para o commit."},
	GITCHECKOUT: Command{"Comando utilizado para mudar para uma branch específica."},
	GITBRANCH:   Command{"Comando utilizado para listar todas as branches existentes. Um * aparecerá ao lado da branch que estiver sendo utilizada naquele momento."},
	GITLOG:      Command{"Comando utilizado para acessar um histórico detalhado de todos os commits realizados no projeto até o momento."},
	GITSHORTLOG: Command{"Comando utilizado para exibir um histórico resumido dos commits do projeto. É bem semelhante ao git log, mas mostra apenas os autores, quantos commits cada um fez e a mensagem de cada commit."},
	GITCLEAN:    Command{"Comando utilizado para limpar arquivos untracked, ou seja, arquivos que o git não está rastreando. Pode-se usar esse comando para se livrar de arquivos que não são mais de interesse ou importância para o dono do projeto."},
}

