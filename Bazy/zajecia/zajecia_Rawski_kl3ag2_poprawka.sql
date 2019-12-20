DROP TABLE IF EXISTS obiekty;
DROP TABLE IF EXISTS osoby;
DROP TABLE IF EXISTS wejscia;
DROP TABLE IF EXISTS zajecia;

CREATE TABLE obiekty (
	id_obiektu INTEGER PRIMARY KEY,
	nazwa VARCHAR(20) NOT NULL
);

CREATE TABLE osoby(
	id_osoby INTEGER PRIMARY KEY AUTO_INCREMENT,
	nazwisko VARCHAR(30) NOT NULL,
	imie VARCHAR(30) NOT NULL,
	plec CHAR(1) DEFAULT ''
);

CREATE TABLE wejscia(
	id INTEGER PRIMARY KEY AUTO_INCREMENT,
	id_osoby INTEGER,
	data DATE,
	id_zajec INTEGER NOT NULL,
	FOREIGN KEY (id_osoby) REFERENCES osoby(id_osoby)
);

CREATE TABLE zajecia (
    id_zajec INTEGER,
    id_obiektu INTEGER,
    zajecia VARCHAR(30),
    cena INTEGER,
    FOREIGN KEY (id_obiektu) REFERENCES obiekty(id_obiektu),
    FOREIGN KEY (id_zajec) REFERENCES zajecia(id_zajec)
);
