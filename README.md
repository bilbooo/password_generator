# Generatore di password

Piccolo programma in C che genera una password casuale (lettere minuscole, maiuscole, cifre e caratteri speciali) in base alla lunghezza scelta.

## Come iniziare

### 1. Clona il repository

Apri un terminale e lancia:

```bash
git clone https://github.com/bilbooo/password_generator.git
```

Questo comando scarica una copia di tutti i file del progetto in una nuova cartella chiamata `password_generator`.

### 2. Entra nella cartella

```bash
cd password_generator
```

Da qui in poi tutti i comandi vanno lanciati da dentro questa cartella.

### 3. Compila il programma

```bash
make        # compila e crea l'eseguibile password_generator
make clean  # rimuove l'eseguibile
```

### 4. Esegui il programma

```bash
./password_generator
```

Il programma chiede la lunghezza desiderata (max 255 caratteri) e stampa la password generata.

