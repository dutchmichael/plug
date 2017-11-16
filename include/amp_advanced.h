#ifndef AMP_ADVANCED_H
#define AMP_ADVANCED_H

#include <memory>
#include <QDialog>
#include <QSettings>

namespace Ui {
    class Amp_Advanced;
}

class Amp_Advanced : public QDialog
{
    Q_OBJECT

public:
    explicit Amp_Advanced(QWidget *parent = nullptr);
    ~Amp_Advanced();

public slots:
    void change_cabinet(int);
    void change_noise_gate(int);
    void set_master_vol(int);
    void set_gain2(int);
    void set_presence(int);
    void set_depth(int);
    void set_threshold(int);
    void set_bias(int);
    void set_sag(int);
    void set_brightness(bool);
    void set_usb_gain(int);

private slots:
    void activate_custom_ng(int);

private:
    const std::unique_ptr<Ui::Amp_Advanced> ui;
};

#endif // AMP_ADVANCED_H
