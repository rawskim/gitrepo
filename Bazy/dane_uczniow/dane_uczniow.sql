DROP TABLE IF EXISTS nazwiska;
CREATE TABLE nazwiska (
    nr_ucznia INTEGER PRIMARY KEY,
    nazwisko TEXT(30),
    imie1 TEXT(15),
    imie2 TEXT(15)
);

DROP TABLE IF EXISTS dane_osobowe;
CREATE TABLE dane_osobowe (
    nr_ucznia INTEGER,
    dzien INTEGER,
    miesiac INTEGER,
    rok INTEGER,
    miejsce_urodz TEXT(20),
    wojewodztwo TEXT(30),
    FOREIGN KEY (nr_ucznia) REFERENCES nazwiska(nr_ucznia)
);

DROP TABLE IF EXISTS oceny;
CREATE TABLE oceny
(
    nr_ucznia INTEGER,
    zach TEXT(15),
    rel_ety DECIMAL DEFAULT NULL,
    pol DECIMAL DEFAULT NULL,
    ang DECIMAL DEFAULT NULL,
    niem DECIMAL DEFAULT NULL,
    mat DECIMAL DEFAULT NULL,
    his DECIMAL DEFAULT NULL,
    geo DECIMAL DEFAULT NULL,
    bio DECIMAL DEFAULT NULL,
    fiz DECIMAL DEFAULT NULL,
    che DECIMAL DEFAULT NULL,
    tech DECIMAL DEFAULT NULL,
    info DECIMAL DEFAULT NULL,
    plas DECIMAL DEFAULT NULL,
    po DECIMAL DEFAULT NULL,
    wf DECIMAL DEFAULT NULL
    FOREIGN KEY (nr_ucznia) REFERENCES nazwiska(nr_ucznia)
);
