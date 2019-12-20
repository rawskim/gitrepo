DROP TABLE IF EXISTS znajomosci;
DROP TABLE IF EXISTS zdjecia;
DROP TABLE IF EXISTS uzytkownicy;
DROP TABLE IF EXISTS panstwo;

CREATE TABLE panstwo (
    id_panstwo INTEGER PRIMARY KEY AUTOINCREMENT,
    nazwa VARCHAR(30) NOT NULL CHECK(nazwa <> '')
);

CREATE TABLE uzytkownicy (
    id_uzyt INTEGER PRIMARY KEY AUTOINCREMENT,
    imię VARCHAR(30) NOT NULL,
    nazwisko VARCHAR(30) NOT NULL,
    id_panstwo INTEGER,
    plec CHAR(1) DEFAULT '',
    FOREIGN KEY (id_panstwo) REFERENCES panstwo(id_panstwo)
);


CREATE TABLE zdjecia (
    id_zdjecia INTEGER PRIMARY KEY AUTOINCREMENT,
    data_dodatnia DATE,
    id_uzyt CHAR(8) NOT NULL,
    szerokosc DECIMAL(3,2),
    wysokosc DECIMAL(3,2),
    FOREIGN KEY (id_uzyt) REFERENCES uzytkownicy(id_uzyt) 
    ON DELETE CASCADE
);


CREATE TABLE znajomosci (
    idu1 INTEGER NOT NULL REFERENCES uzytkownicy(id_uzyt) ON DELETE CASCADE,
    idu2 INTEGER NOT NULL REFERENCES uzytkownicy(id_uzyt) ON DELETE CASCADE,
    data DATE,
    PRIMARY KEY(idu1, idu2)
);
