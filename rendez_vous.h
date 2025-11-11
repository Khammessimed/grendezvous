#ifndef RENDEZVOUS_H
#define RENDEZVOUS_H

#include <QString>
#include <QDate>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QStringList>

class RendezVous
{
public:
    RendezVous();
    RendezVous(int id, QString client, QString heure, QDate date, QString role, QString statut);

    int getId() const;
    QString getClient() const;
    QString getHeure() const;
    QDate getDate() const;
    QString getRole() const;
    QString getStatut() const;

    void setId(int id);
    void setClient(const QString &client);
    void setHeure(const QString &heure);
    void setDate(const QDate &date);
    void setRole(const QString &role);
    void setStatut(const QString &statut);

    bool ajouter();
    bool modifier();
    bool supprimer(int id);

    QSqlQueryModel* afficher(const QString& critereTri,
                             const QString& ordreTri,
                             const QString& termeRecherche,
                             bool checkId, bool checkClient, bool checkHeure,
                             bool checkDate, bool checkRole, bool checkStatut);

private:
    int m_id;
    QString m_client;
    QString m_heure;
    QDate m_date;
    QString m_role;
    QString m_statut;
};

#endif // RENDEZVOUS_H
